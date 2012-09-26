/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, <UIGestureRecognizerDelegate>, NSMutableSet, UIEvent, NSMutableArray;

@interface UIGestureRecognizer : NSObject  {
    NSMutableArray *_targets;
    NSMutableArray *_delayedTouches;
    UIView *_view;
    UIEvent *_updateEvent;
    <UIGestureRecognizerDelegate> *_delegate;
    NSMutableSet *_failureRequirements;
    NSMutableSet *_failureDependents;
    NSMutableSet *_dynamicFailureRequirements;
    NSMutableSet *_dynamicFailureDependents;
    id _failureMap;
    NSMutableSet *_friends;
    int _state;
    struct { 
        unsigned int delegateShouldBegin : 1; 
        unsigned int delegateCanPrevent : 1; 
        unsigned int delegateCanBePrevented : 1; 
        unsigned int delegateShouldRecognizeSimultaneously : 1; 
        unsigned int delegateShouldReceiveTouch : 1; 
        unsigned int delegateShouldRequireFailure : 1; 
        unsigned int delegateShouldBeRequiredToFail : 1; 
        unsigned int delegateFailed : 1; 
        unsigned int privateDelegateShouldBegin : 1; 
        unsigned int privateDelegateCanPrevent : 1; 
        unsigned int privateDelegateCanBePrevented : 1; 
        unsigned int privateDelegateShouldRecognizeSimultaneously : 1; 
        unsigned int privateDelegateShouldReceiveTouch : 1; 
        unsigned int subclassShouldRequireFailure : 1; 
        unsigned int cancelsTouchesInView : 1; 
        unsigned int delaysTouchesBegan : 1; 
        unsigned int delaysTouchesEnded : 1; 
        unsigned int disabled : 1; 
        unsigned int dirty : 1; 
        unsigned int queriedFailureRequirements : 1; 
        unsigned int delivered : 1; 
        unsigned int continuous : 1; 
        unsigned int requiresDelayedBegan : 1; 
    } _gestureFlags;
}

@property(readonly) int state;
@property <UIGestureRecognizerDelegate> * delegate;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) UIView * view;
@property BOOL cancelsTouchesInView;
@property BOOL delaysTouchesBegan;
@property BOOL delaysTouchesEnded;

+ (BOOL)_touchesBeganWasDelayedForTouch:(id)arg1;

- (void)reset;
- (void)setState:(int)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (int)state;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)_detach;
- (id)_briefDescription;
- (void)_failureRequirementCompleted:(id)arg1 withEvent:(id)arg2;
- (void)removeFailureRequirement:(id)arg1;
- (void)_exclude;
- (void)_cancelRecognition;
- (BOOL)_isExcludedByGesture:(id)arg1;
- (void)_addFriendGesture:(id)arg1;
- (int)_depthFirstViewCompare:(id)arg1;
- (void)_resetIfFinished;
- (void)_delayedUpdateGesture;
- (void)_queryFailureRequirements;
- (void)_touchWasCancelled:(id)arg1;
- (float)_distanceBetweenTouches:(id)arg1;
- (struct CGPoint { float x1; float x2; })_centroidOfTouches:(id)arg1 excludingEnded:(BOOL)arg2;
- (void)_setFailureMap:(id)arg1;
- (id)_failureMap;
- (void)_appendDescription:(id)arg1 forDependencies:(id)arg2 toString:(id)arg3 atLevel:(int)arg4;
- (void)_appendSubclassDescription:(id)arg1;
- (BOOL)delaysTouchesEnded;
- (BOOL)delaysTouchesBegan;
- (BOOL)cancelsTouchesInView;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 includingDependencies:(BOOL)arg3;
- (void)_removeFailureDependent:(id)arg1;
- (void)_addFailureDependent:(id)arg1;
- (BOOL)_delegateCanPreventGestureRecognizer:(id)arg1;
- (BOOL)_affectedByGesture:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_updateGestureWithEvent:(id)arg1;
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)_addDynamicFailureDependent:(id)arg1;
- (void)_addDynamicFailureRequirement:(id)arg1;
- (BOOL)_requiresGestureRecognizerToFail:(id)arg1;
- (void)_delayTouchesForEvent:(id)arg1;
- (void)_clearDelayedTouches;
- (void)_delayTouch:(id)arg1 forEvent:(id)arg2;
- (void)_enqueueDelayedTouchToSend:(id)arg1;
- (BOOL)_isFriendWithGesture:(id)arg1;
- (BOOL)_shouldBegin;
- (void)_clearUpdateTimer;
- (void)_enqueueDelayedTouchesToSend;
- (void)_relatedGestureReleased:(id)arg1;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (void)setCancelsTouchesInView:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })locationOfTouch:(unsigned int)arg1 inView:(id)arg2;
- (void)requireOtherGestureToFail:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)_delegateShouldReceiveTouch:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)_isRecognized;
- (id)_activeTouchesForEvent:(id)arg1;
- (unsigned int)numberOfTouches;
- (void)setDelaysTouchesBegan:(BOOL)arg1;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)setDelaysTouchesEnded:(BOOL)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)_setDirty;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (void)setView:(id)arg1;
- (void)_queueForResetIfFinished;
- (void)_updateGestureStateWithEvent:(id)arg1 afterDelay:(BOOL)arg2;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)_isDirty;
- (id)view;
- (void)_invalidate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
