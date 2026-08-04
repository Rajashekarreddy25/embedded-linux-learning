pipeline {

    agent any

    stages {

        stage('Checkout') {
            steps {
                git branch: 'main',
                    url: 'git@github.com:Rajashekarreddy25/embedded-linux-learning.git'
            }
        }

        stage('Build Makefile Projects') {
            steps {
                sh '''
                chmod +x ci/build_makefiles.sh
                ./ci/build_makefiles.sh
                '''
            }
        }

        stage('Build Standalone Programs') {
            steps {
                sh '''
                chmod +x ci/build_standalone.sh
                ./ci/build_standalone.sh
                '''
            }
        }

    }

   post {

    always {

        sh '''
        chmod +x ci/generate_report.sh
        ./ci/generate_report.sh
        '''

        archiveArtifacts artifacts: 'ci/logs/*.log, ci/reports/*.html',
                         fingerprint: true

        publishHTML([
            allowMissing: false,
            alwaysLinkToLastBuild: true,
            keepAll: true,
            reportDir: 'ci/reports',
            reportFiles: 'build_report.html',
            reportName: 'Embedded Linux Build Report'
        ])
    }

    success {
        echo 'BUILD SUCCESS'
    }

    failure {
        echo 'BUILD FAILED'
    }
}

}
