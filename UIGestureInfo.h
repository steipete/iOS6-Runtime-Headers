/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIGestureAnimation, UIScrollAnimation;

@interface UIGestureInfo : NSObject  {
    id delegate;
    int enabledGestures;
    int rotationState;
    int zoomState;
    int panState;
    struct CGPoint { 
        float x; 
        float y; 
    } startGestureInner;
    struct CGPoint { 
        float x; 
        float y; 
    } startGestureOuter;
    struct CGPoint { 
        float x; 
        float y; 
    } startScrollPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } endScrollPoint;
    struct CGSize { 
        float width; 
        float height; 
    } visibleSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } centerRect;
    UIGestureAnimation *rotationAnimation;
    float rotationDegrees;
    float recentRotationDegrees;
    float minDegrees;
    float maxDegrees;
    float startDegrees;
    float endDegrees;
    UIGestureAnimation *zoomAnimation;
    int zoomRubberBandHysteresisCount;
    float zoomScale;
    float startScale;
    float endScale;
    float unadjustedScale;
    float zoomMultiplier;
    float minScale;
    float maxScale;
    struct CGPoint { 
        float x; 
        float y; 
    } zoomFailureWindowPoint;
    float zoomFailureDuration;
    float zoomFailureStartScale;
    float zoomAnimationProgress;
    UIScrollAnimation *scrollAnimation;
    struct { 
        unsigned int pushedRunLoop : 1; 
        unsigned int isRotatingRight : 1; 
        unsigned int isZoomRubberBandEnabled : 1; 
        unsigned int zoomsFromCurrentToMinOrMax : 1; 
        unsigned int updatesScroller : 1; 
        unsigned int isAnimatingZoomFailure : 1; 
    } flags;
}


- (id)init;
- (void)dealloc;

@end
