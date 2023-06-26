# Assignment 9: ICS #

**Starting the apache tomcat:**

    ```bash
    Last login: Tue May  2 11:37:02 on ttys000
                        'c.          namansoni@namans-MacBook-Air.local
                    ,xNMM.          ----------------------------------
                .OMMMMo           OS: macOS 13.3.1 22E261 arm64
                OMMM0,            Host: MacBookAir10,1
        .;loddo:' loolloddol;.      Kernel: 22.4.0
    cKMMMMMMMMMMNWMMMMMMMMMM0:    Uptime: 1 day, 11 hours, 35 mins
    .KMMMMMMMMMMMMMMMMMMMMMMMWd.    Packages: 1 (port), 39 (brew)
    XMMMMMMMMMMMMMMMMMMMMMMMX.      Shell: zsh 5.9
    ;MMMMMMMMMMMMMMMMMMMMMMMM:       Resolution: 1440x900
    :MMMMMMMMMMMMMMMMMMMMMMMM:       DE: Aqua
    .MMMMMMMMMMMMMMMMMMMMMMMMX.      WM: Quartz Compositor
    kMMMMMMMMMMMMMMMMMMMMMMMMWd.    WM Theme: Blue (Dark)
    .XMMMMMMMMMMMMMMMMMMMMMMMMMMk   Terminal: Apple_Terminal
    .XMMMMMMMMMMMMMMMMMMMMMMMMK.   Terminal Font: SFMono-Regular
        kMMMMMMMMMMMMMMMMMMMMMMd     CPU: Apple M1
        ;KMMMMMMMWXXWMMMMMMMk.      GPU: Apple M1
        .cooc,.    .,coo:.        Memory: 1450MiB / 8192MiB

    ┌─(~)─────────────────────────────────────(namansoni@namans-MacBook-Air:s000)─┐
    └─(12:08:51)──> /Users/namansoni/Downloads/apache-tomcat-9.0.74/bin
    ┌─(...wnloads/apache-tomcat-9.0.74/bin)───(namansoni@namans-MacBook-Air:s000)─┐
    └─(12:08:53)──> chmod +x catalina.sh                            ──(Tue,May02)─┘

    ┌─(...wnloads/apache-tomcat-9.0.74/bin)───(namansoni@namans-MacBook-Air:s000)─┐
    └─(12:09:00)──> ./catalina.sh run                               ──(Tue,May02)─┘

    Using CATALINA_BASE:   /Users/namansoni/Downloads/apache-tomcat-9.0.74
    Using CATALINA_HOME:   /Users/namansoni/Downloads/apache-tomcat-9.0.74
    Using CATALINA_TMPDIR: /Users/namansoni/Downloads/apache-tomcat-9.0.74/temp
    Using JRE_HOME:        /Library/Java/JavaVirtualMachines/jdk-19.jdk/Contents/Home
    Using CLASSPATH:       /Users/namansoni/Downloads/apache-tomcat-9.0.74/bin/bootstrap.jar:/Users/namansoni/Downloads/apache-tomcat-9.0.74/bin/tomcat-juli.jar
    Using CATALINA_OPTS:
    NOTE: Picked up JDK_JAVA_OPTIONS:  --add-opens=java.base/java.lang=ALL-UNNAMED --add-opens=java.base/java.io=ALL-UNNAMED --add-opens=java.base/java.util=ALL-UNNAMED --add-opens=java.base/java.util.concurrent=ALL-UNNAMED --add-opens=java.rmi/sun.rmi.transport=ALL-UNNAMED
    02-May-2023 12:09:11.471 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Server version name:   Apache Tomcat/9.0.74
    02-May-2023 12:09:11.473 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Server built:          Apr 13 2023 08:10:39 UTC
    02-May-2023 12:09:11.473 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Server version number: 9.0.74.0
    02-May-2023 12:09:11.473 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log OS Name:               Mac OS X
    02-May-2023 12:09:11.473 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log OS Version:            13.3.1
    02-May-2023 12:09:11.473 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Architecture:          aarch64
    02-May-2023 12:09:11.473 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Java Home:             /Library/Java/JavaVirtualMachines/jdk-19.jdk/Contents/Home
    02-May-2023 12:09:11.473 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log JVM Version:           19.0.2+7-44
    02-May-2023 12:09:11.473 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log JVM Vendor:            Oracle Corporation
    02-May-2023 12:09:11.473 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log CATALINA_BASE:         /Users/namansoni/Downloads/apache-tomcat-9.0.74
    02-May-2023 12:09:11.473 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log CATALINA_HOME:         /Users/namansoni/Downloads/apache-tomcat-9.0.74
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: --add-opens=java.base/java.lang=ALL-UNNAMED
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: --add-opens=java.base/java.io=ALL-UNNAMED
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: --add-opens=java.base/java.util=ALL-UNNAMED
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: --add-opens=java.base/java.util.concurrent=ALL-UNNAMED
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: --add-opens=java.rmi/sun.rmi.transport=ALL-UNNAMED
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: -Djava.util.logging.config.file=/Users/namansoni/Downloads/apache-tomcat-9.0.74/conf/logging.properties
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: -Djava.util.logging.manager=org.apache.juli.ClassLoaderLogManager
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: -Djdk.tls.ephemeralDHKeySize=2048
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: -Djava.protocol.handler.pkgs=org.apache.catalina.webresources
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: -Dorg.apache.catalina.security.SecurityListener.UMASK=0027
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: -Dignore.endorsed.dirs=
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: -Dcatalina.base=/Users/namansoni/Downloads/apache-tomcat-9.0.74
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: -Dcatalina.home=/Users/namansoni/Downloads/apache-tomcat-9.0.74
    02-May-2023 12:09:11.481 INFO [main] org.apache.catalina.startup.VersionLoggerListener.log Command line argument: -Djava.io.tmpdir=/Users/namansoni/Downloads/apache-tomcat-9.0.74/temp
    02-May-2023 12:09:11.486 INFO [main] org.apache.catalina.core.AprLifecycleListener.lifecycleEvent The Apache Tomcat Native library which allows using OpenSSL was not found on the java.library.path: [/Users/namansoni/Library/Java/Extensions:/Library/Java/Extensions:/Network/Library/Java/Extensions:/System/Library/Java/Extensions:/usr/lib/java:.]
    02-May-2023 12:09:11.666 INFO [main] org.apache.coyote.AbstractProtocol.init Initializing ProtocolHandler ["http-nio-8080"]
    02-May-2023 12:09:11.682 INFO [main] org.apache.coyote.AbstractProtocol.init Initializing ProtocolHandler ["https-jsse-nio-8443"]
    02-May-2023 12:09:11.869 INFO [main] org.apache.tomcat.util.net.AbstractEndpoint.logCertificate Connector [https-jsse-nio-8443], TLS virtual host [_default_], certificate type [UNDEFINED] configured from [conf/a1batch] using alias [mykeys] and with trust store [null]
    02-May-2023 12:09:11.870 INFO [main] org.apache.catalina.startup.Catalina.load Server initialization in [495] milliseconds
    02-May-2023 12:09:11.886 INFO [main] org.apache.catalina.core.StandardService.startInternal Starting service [Catalina]
    02-May-2023 12:09:11.886 INFO [main] org.apache.catalina.core.StandardEngine.startInternal Starting Servlet engine: [Apache Tomcat/9.0.74]
    02-May-2023 12:09:11.889 INFO [main] org.apache.catalina.startup.HostConfig.deployDirectory Deploying web application directory [/Users/namansoni/Downloads/apache-tomcat-9.0.74/webapps/docs]
    02-May-2023 12:09:11.987 INFO [main] org.apache.catalina.startup.HostConfig.deployDirectory Deployment of web application directory [/Users/namansoni/Downloads/apache-tomcat-9.0.74/webapps/docs] has finished in [97] ms
    02-May-2023 12:09:11.987 INFO [main] org.apache.catalina.startup.HostConfig.deployDirectory Deploying web application directory [/Users/namansoni/Downloads/apache-tomcat-9.0.74/webapps/myapp]
    02-May-2023 12:09:12.006 INFO [main] org.apache.catalina.startup.HostConfig.deployDirectory Deployment of web application directory [/Users/namansoni/Downloads/apache-tomcat-9.0.74/webapps/myapp] has finished in [19] ms
    02-May-2023 12:09:12.006 INFO [main] org.apache.catalina.startup.HostConfig.deployDirectory Deploying web application directory [/Users/namansoni/Downloads/apache-tomcat-9.0.74/webapps/manager]
    02-May-2023 12:09:12.027 INFO [main] org.apache.catalina.startup.HostConfig.deployDirectory Deployment of web application directory [/Users/namansoni/Downloads/apache-tomcat-9.0.74/webapps/manager] has finished in [21] ms
    02-May-2023 12:09:12.027 INFO [main] org.apache.catalina.startup.HostConfig.deployDirectory Deploying web application directory [/Users/namansoni/Downloads/apache-tomcat-9.0.74/webapps/examples]
    02-May-2023 12:09:12.126 INFO [main] org.apache.catalina.startup.HostConfig.deployDirectory Deployment of web application directory [/Users/namansoni/Downloads/apache-tomcat-9.0.74/webapps/examples] has finished in [98] ms
    02-May-2023 12:09:12.126 INFO [main] org.apache.catalina.startup.HostConfig.deployDirectory Deploying web application directory [/Users/namansoni/Downloads/apache-tomcat-9.0.74/webapps/ROOT]
    02-May-2023 12:09:12.133 INFO [main] org.apache.catalina.startup.HostConfig.deployDirectory Deployment of web application directory [/Users/namansoni/Downloads/apache-tomcat-9.0.74/webapps/ROOT] has finished in [7] ms
    02-May-2023 12:09:12.133 INFO [main] org.apache.catalina.startup.HostConfig.deployDirectory Deploying web application directory [/Users/namansoni/Downloads/apache-tomcat-9.0.74/webapps/host-manager]
    02-May-2023 12:09:12.141 INFO [main] org.apache.catalina.startup.HostConfig.deployDirectory Deployment of web application directory [/Users/namansoni/Downloads/apache-tomcat-9.0.74/webapps/host-manager] has finished in [8] ms
    02-May-2023 12:09:12.143 INFO [main] org.apache.coyote.AbstractProtocol.start Starting ProtocolHandler ["http-nio-8080"]
    02-May-2023 12:09:12.147 INFO [main] org.apache.coyote.AbstractProtocol.start Starting ProtocolHandler ["https-jsse-nio-8443"]
    02-May-2023 12:09:12.148 INFO [main] org.apache.catalina.startup.Catalina.start Server startup in [277] milliseconds
    ^Z
    [1]  + 31827 suspended  ./catalina.sh run
    ┌─(~/Downloads/apache-tomcat-9.0.74/bin)──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────(namansoni@namans-MacBook-Air:s000)─┐
    └─(12:22:24)──>                                                                                                                                                                       146 ↵ ──(Tue,May02)─┘
    ```

**Creating a key:**

    ```bash
    Last login: Tue May  2 12:08:50 on ttys000
                        'c.          namansoni@namans-MacBook-Air.local 
                    ,xNMM.          ---------------------------------- 
                .OMMMMo           OS: macOS 13.3.1 22E261 arm64 
                OMMM0,            Host: MacBookAir10,1 
        .;loddo:' loolloddol;.      Kernel: 22.4.0 
    cKMMMMMMMMMMNWMMMMMMMMMM0:    Uptime: 1 day, 11 hours, 47 mins
    .KMMMMMMMMMMMMMMMMMMMMMMMWd.    Packages: 1 (port), 39 (brew)
    XMMMMMMMMMMMMMMMMMMMMMMMX.      Shell: zsh 5.9
    ;MMMMMMMMMMMMMMMMMMMMMMMM:       Resolution: 1440x900
    :MMMMMMMMMMMMMMMMMMMMMMMM:       DE: Aqua
    .MMMMMMMMMMMMMMMMMMMMMMMMX.      WM: Quartz Compositor
    kMMMMMMMMMMMMMMMMMMMMMMMMWd.    WM Theme: Blue (Dark)
    .XMMMMMMMMMMMMMMMMMMMMMMMMMMk   Terminal: Apple_Terminal
    ^[[AMMMMMMMMMMMMMMMMMMMMMMMMK.       Terminal Font: SFMono-Regular
        kMMMMMMMMMMMMMMMMMMMMMMd     CPU: Apple M1
        ;KMMMMMMMWXXWMMMMMMMk.      GPU: Apple M1
        .cooc,.    .,coo:.        Memory: 1535MiB / 8192MiB

    ┌─(~/Downloads/apache-tomcat-9.0.74/bin)──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────(namansoni@namans-MacBook-Air:s001)─┐
    └─(12:20:32)──> keytool -genkey -alias mykeys -keyalg RSA -keystore a1batch                                                                                                                 ──(Tue,May02)─┘
    Enter keystore password:
    Re-enter new password:
    What is your first and last name?
      [Unknown]:  Naman Soni
    What is the name of your organizational unit?
        [Unknown]:  scet
    What is the name of your organization?
        [Unknown]:  mitwpu
    What is the name of your City or Locality?
        [Unknown]:  pune
    What is the name of your State or Province?
        [Unknown]:  maharashtra
    What is the two-letter country code for this unit?
        [Unknown]:  in
    Is CN=Naman Soni, OU=scet, O=mitwpu, L=pune, ST=maharashtra, C=in correct?
        [no]:  yes
    
    ```
