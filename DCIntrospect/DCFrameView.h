//
//  DCFrameView.h
//  DCIntrospect
//
//  Created by Domestic Cat on 29/04/11.
//

#import "DCIntrospectDefines.h"
#import <QuartzCore/QuartzCore.h>

@protocol DCFrameViewDelegate <NSObject>

@required

- (void)touchAtPoint:(CGPoint)point;

@end

@interface DCFrameView : UIView
{
    
}

@property (nonatomic, assign) id<DCFrameViewDelegate> delegate;
@property (nonatomic) CGRect mainRect;
@property (nonatomic) CGRect superRect;
@property (nonatomic, retain) UILabel *touchPointLabel;
@property (nonatomic, retain) NSMutableArray *rectsToOutline;
@property (nonatomic, retain) UIImageView *touchPointView;

// Setup //

- (id)initWithFrame:(CGRect)frame delegate:(id)aDelegate;

// Custom Setters //

- (void)setMainRect:(CGRect)newMainRect;
- (void)setSuperRect:(CGRect)newSuperRect;

// Drawing/Display //

- (void)drawRect:(CGRect)rect;

// Touch Handling //

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;

@end
