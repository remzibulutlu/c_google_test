pipeline {
  agent {
    docker {
      image 'haliliceylan/vscode-bazel-dextool-environment:latest'
      args '''--user vscode
-w /workspaces'''
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