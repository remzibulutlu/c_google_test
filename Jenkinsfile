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
        sh 'ls -R /opt'
        sh 'whoami'
        sh 'cat /etc/passwd'
        sh '/opt/dextool_install/bin/dextool --help'
        sh 'uname -a'
        sh 'cmake --help'
      }
    }

  }
}