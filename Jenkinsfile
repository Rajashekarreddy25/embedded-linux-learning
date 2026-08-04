/*
pipeline {

    agent any

    stages {

        stage('Checkout') {
            steps {
                git branch: 'main',
                    url: 'git@github.com:Rajashekarreddy25/embedded-linux-learning.git'
            }
        }
	stage('Debug') {
 	   steps {
       		 sh '''
           		 pwd
           		 ls -R
           		 git rev-parse HEAD

          		 echo "----- logger.sh -----"
           		 cat ci/lib/logger.sh

           		 echo "----- build_makefiles.sh -----"
           		 cat ci/build_makefiles.sh
       		 '''
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
*/
/*
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
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'chmod +x ci/build_makefiles.sh'
                    sh './ci/build_makefiles.sh'
                }
            }
        }

        stage('Build Standalone Programs') {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'chmod +x ci/build_standalone.sh'
                    sh './ci/build_standalone.sh'
                }
            }
        }

        stage('Generate Report') {
            steps {
                sh 'chmod +x ci/generate_report.sh'
                sh './ci/generate_report.sh'
            }
        }
    }

    post {
        always {
            archiveArtifacts artifacts: 'ci/logs/*, ci/reports/*', fingerprint: true

            publishHTML(target: [
                allowMissing: false,
                alwaysLinkToLastBuild: true,
                keepAll: true,
                reportDir: 'ci/reports',
                reportFiles: 'build_report.html',
                reportName: 'Embedded Linux CI Report'
            ])
        }
    }
}
*/

/*

pipeline {

    agent any

    options {
        timestamps()
        disableConcurrentBuilds()

        buildDiscarder(logRotator(
            numToKeepStr: '20',
            artifactNumToKeepStr: '10'
        ))
    }

    stages {

        stage('Clean Workspace') {
            steps {
                cleanWs()
            }
        }

        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Build Information') {
            steps {
                sh '''
                    echo "======================================="
                    echo "Job Name      : $JOB_NAME"
                    echo "Build Number  : $BUILD_NUMBER"
                    echo "Workspace     : $WORKSPACE"
                    echo "Build User    : $BUILD_USER"
                    echo "Build URL     : $BUILD_URL"
                    echo "======================================="

                    echo
                    echo "Git Commit"
                    git log -1 --oneline

                    echo
                    echo "Compiler"
                    gcc --version | head -1

                    echo "======================================="
                '''
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

        stage('Generate HTML Report') {
            steps {
                sh '''
                    chmod +x ci/generate_report.sh
                    ./ci/generate_report.sh
                '''
            }
        }

    }

    post {

        always {

            archiveArtifacts artifacts: '''
                ci/logs/*
                ci/reports/*
                ci/build/**
            ''', fingerprint: true

            publishHTML(target: [
                allowMissing: true,
                alwaysLinkToLastBuild: true,
                keepAll: true,
                reportDir: 'ci/reports',
                reportFiles: 'build_report.html',
                reportName: 'Embedded Linux Build Report'
            ])

            script {
                currentBuild.description =
                    "#${env.BUILD_NUMBER} - ${env.GIT_COMMIT?.take(7) ?: 'N/A'}"
            }
        }

        success {
            echo "===================================="
            echo "BUILD SUCCESS"
            echo "===================================="
        }

        failure {
            echo "===================================="
            echo "BUILD FAILED"
            echo "===================================="
        }

        unstable {
            echo "===================================="
            echo "BUILD UNSTABLE"
            echo "===================================="
        }

        aborted {
            echo "===================================="
            echo "BUILD ABORTED"
            echo "===================================="
        }
    }
}

*/




pipeline {

    agent any

    options {
        timestamps()
        disableConcurrentBuilds()

        buildDiscarder(logRotator(
            numToKeepStr: '20',
            artifactNumToKeepStr: '10'
        ))
    }

    stages {

        stage('Clean Workspace') {
            steps {
                cleanWs()
            }
        }

        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Build Information') {
            steps {
                sh '''
                    echo "=========================================="
                    echo "Embedded Linux CI Pipeline"
                    echo "=========================================="
                    echo "Job Name      : $JOB_NAME"
                    echo "Build Number  : $BUILD_NUMBER"
                    echo "Workspace     : $WORKSPACE"
                    echo "Build URL     : $BUILD_URL"
                    echo

                    echo "Git Commit"
                    git log -1 --oneline

                    echo
                    echo "Compiler"
                    gcc --version | head -1

                    echo "=========================================="
                '''
            }
        }

        stage('Build Makefile Projects') {
            steps {
                catchError(buildResult: 'FAILURE', stageResult: 'FAILURE') {
                    sh '''
                        chmod +x ci/build_makefiles.sh
                        ./ci/build_makefiles.sh
                    '''
                }
            }
        }

        stage('Build Standalone Programs') {
            steps {
                catchError(buildResult: 'FAILURE', stageResult: 'FAILURE') {
                    sh '''
                        chmod +x ci/build_standalone.sh
                        ./ci/build_standalone.sh
                    '''
                }
            }
        }

        stage('Generate HTML Report') {
            steps {
                sh '''
                    chmod +x ci/generate_report.sh
                    ./ci/generate_report.sh
                '''
            }
        }
    }

    post {

        always {

            archiveArtifacts(
                artifacts: 'ci/logs/*, ci/reports/*, ci/build/**',
                fingerprint: true
            )

            publishHTML(target: [
                allowMissing: false,
                alwaysLinkToLastBuild: true,
                keepAll: true,
                reportDir: 'ci/reports',
                reportFiles: 'build_report.html',
                reportName: 'Embedded Linux Build Report'
            ])

            script {
                def commit = sh(
                    script: 'git rev-parse --short HEAD',
                    returnStdout: true
                ).trim()

                currentBuild.description = "#${env.BUILD_NUMBER} | ${commit}"
            }
        }

        success {
            echo ""
            echo "======================================"
            echo "BUILD SUCCESS"
            echo "======================================"
        }

        failure {
            echo ""
            echo "======================================"
            echo "BUILD FAILED"
            echo "======================================"
        }

        unstable {
            echo ""
            echo "======================================"
            echo "BUILD UNSTABLE"
            echo "======================================"
        }

        aborted {
            echo ""
            echo "======================================"
            echo "BUILD ABORTED"
            echo "======================================"
        }
    }
}
