/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIScrollView, NSTimer;

@interface ABAdjusterRecord : NSObject  {
    UIScrollView *_scrollView;
    float _adjustment;
    BOOL _manuallyAdjusted;
    NSTimer *_delayedScrollTimer;
}

@property(retain) UIScrollView * scrollView;
@property float adjustment;
@property BOOL manuallyAdjusted;
@property(retain) NSTimer * delayedScrollTimer;

+ (id)recordWithScrollView:(id)arg1;

- (BOOL)manuallyAdjusted;
- (void)cancelDelayedAdjustments;
- (void)setManuallyAdjusted:(BOOL)arg1;
- (void)setAdjustment:(float)arg1;
- (float)adjustment;
- (id)delayedScrollTimer;
- (void)setDelayedScrollTimer:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)_adjustTableForKeyboardInfo:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;

@end
