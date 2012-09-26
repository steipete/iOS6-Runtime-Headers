/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class NSMutableSet, MPViewController, UIView, UIViewController;

@interface MPTransitionController : NSObject  {
    struct __CFDictionary { } *_observers;
    float _duration;
    UIView *_rootView;
    NSMutableSet *_persistentViewsToFadeOut;
    NSMutableSet *_viewsToFadeOut;
    NSMutableSet *_persistentViewsToFadeIn;
    NSMutableSet *_viewsToFadeIn;
    MPViewController *_fromViewController;
    int _fromInterfaceOrientation;
    MPViewController *_toViewController;
    int _toInterfaceOrientation;
    UIViewController *_toContainerViewController;
}

@property float duration;
@property int fromInterfaceOrientation;
@property(retain) MPViewController * fromViewController;
@property(retain) UIView * rootView;
@property int toInterfaceOrientation;
@property(retain) MPViewController * toViewController;
@property(retain) UIViewController * toContainerViewController;


- (int)toInterfaceOrientation;
- (int)fromInterfaceOrientation;
- (void)addViewToFadeOut:(id)arg1 restoreOnPop:(BOOL)arg2;
- (void)addViewToFadeIn:(id)arg1 restoreOnPop:(BOOL)arg2;
- (void)willBeginTransition:(unsigned int)arg1;
- (void)messageObserversWithSuccess:(BOOL)arg1;
- (void)setToViewController:(id)arg1;
- (void)setRootView:(id)arg1;
- (void)setFromViewController:(id)arg1;
- (void)setFromInterfaceOrientation:(int)arg1;
- (void)setToInterfaceOrientation:(int)arg1;
- (id)toContainerViewController;
- (void)didFinishTransition:(BOOL)arg1;
- (void)fadeViewsForRestore:(BOOL)arg1;
- (void)setToContainerViewController:(id)arg1;
- (id)rootView;
- (id)toViewController;
- (void)performTransition:(unsigned int)arg1;
- (void)transition:(unsigned int)arg1;
- (void)addObserver:(id)arg1 didEndSelector:(SEL)arg2;
- (id)fromViewController;
- (void)setDuration:(float)arg1;
- (id)init;
- (void)dealloc;
- (float)duration;
- (void)removeObserver:(id)arg1;

@end
