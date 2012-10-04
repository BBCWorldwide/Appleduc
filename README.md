Appleduc
========

A stub project that shows how to use appledoc for code documentation.

It's worth noting that this project doesn't compile. It's not supposed to.

Document generation uses Appledoc, which you can download from https://github.com/tomaz/appledoc

After you install the appledoc utility, open Terminal, navigate to the base project directory, and run:

appledoc AppledocSettings.plist

This will install the documentation into Xcode's documentation, allowing you to view it in Xcode's organizer. You can also retain the HTML files in the project directory by running:

appledoc --output ~/Desktop/ --keep-intermediate-files AppledocSettings.plist