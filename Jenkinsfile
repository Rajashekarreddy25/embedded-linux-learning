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

            archiveArtifacts artifacts: 'ci/logs/*.log',
                              fingerprint: true

        }

        success {
            echo "========== BUILD SUCCESS =========="
        }

        failure {
            echo "========== BUILD FAILED =========="
        }

    }

}
