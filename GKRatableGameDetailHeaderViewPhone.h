/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImageView, UILabel, GKRatingControl, GKStoreItemInternal, GKFacebookLikeButton;

@interface GKRatableGameDetailHeaderViewPhone : GKGameDetailHeaderViewPhone  {
    UIImageView *_dividerView;
    GKFacebookLikeButton *_likeButton;
    GKStoreItemInternal *_storeItem;
    GKRatingControl *_ratingControl;
    UILabel *_ratingLabel;
}

@property(retain) GKStoreItemInternal * storeItem;
@property(retain) UILabel * ratingLabel;
@property(retain) GKRatingControl * ratingControl;
@property(retain) GKFacebookLikeButton * likeButton;
@property(retain) UIImageView * dividerView;


- (void)setRatingLabel:(id)arg1;
- (id)ratingLabel;
- (void)setRatingControl:(id)arg1;
- (void)setLikeButton:(id)arg1;
- (id)likeButton;
- (void)setDividerView:(id)arg1;
- (id)dividerView;
- (void)applyRating:(id)arg1;
- (id)ratingControl;
- (void)readRating;
- (BOOL)iconOnLeft;
- (void)configureTitleView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutSubviewsForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)gameIconStyle;
- (void)updateFromGameRecord;
- (void)setStoreItem:(id)arg1;
- (id)storeItem;
- (float)preferredHeightForOrientation:(int)arg1;
- (id)init;
- (void)dealloc;

@end
