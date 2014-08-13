# LiveFrost

Real time blurring for iOS.

## Installing LiveFrost

Include the entire thing as a CocoaPod by referencing it on GitHub or as a submodule to your application. Use `#import <LiveFrost/LiveFrost.h>` to import all headers.x

## Using LiveFrost

After installing LiveFrost, place `LFGlassView` in a view you’d like to blur and blurring will commence automatically. Use `LFGlassView` as any other `UIView`.


## UserInteractionEnabled
By default userInteractionEnabled is NO, so touch events will be handled by the UIView underneath your LFGlassView. To prevent touch events from being sent to the view under your LFGlassView:

```
LFGlassView glass = [[LFGlassView alloc] init];
glass.userInteractionEnabled = YES;
```

## License

LiveFrost is under the MIT license.
