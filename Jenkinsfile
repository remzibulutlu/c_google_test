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
        sh 'whoami'
        sh 'cat /etc/passwd'
        sh 'uname -a'
        sh 'dextool --help'
        sh 'cmake --help'
      }
    }

  }
}