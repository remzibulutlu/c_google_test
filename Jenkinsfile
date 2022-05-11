pipeline {
  agent {
    docker {
      image 'haliliceylan/vscode-bazel-dextool-environment:latest'
    }

  }
  stages {
    stage('check') {
      steps {
        sh 'dextool --help'
        sh 'cmake --help'
        sh 'uname -a'
      }
    }

  }
}