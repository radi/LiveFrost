#import <Accelerate/Accelerate.h>
#import <QuartzCore/QuartzCore.h>

@interface LFGlassView : UIView

@property (nonatomic, assign) CGFloat blurRadius;
@property (nonatomic, assign) CGFloat scaleFactor;
@property (nonatomic, strong) UIView *blurSuperView;

@end
