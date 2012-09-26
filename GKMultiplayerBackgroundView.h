/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKCurvedCapBackgroundBrush, UIImageView;

@interface GKMultiplayerBackgroundView : UICollectionReusableView  {
    GKCurvedCapBackgroundBrush *_backgroundBrush;
    UIImageView *_imageView;
    struct CGSize { 
        float width; 
        float height; 
    } _cachedImageSize;
}

@property(retain) UIImageView * imageView;
@property(retain) GKCurvedCapBackgroundBrush * backgroundBrush;
@property struct CGSize { float x1; float x2; } cachedImageSize;


- (void)setBackgroundBrush:(id)arg1;
- (void)setCachedImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)backgroundBrush;
- (struct CGSize { float x1; float x2; })cachedImageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setImageView:(id)arg1;
- (id)imageView;
- (void)layoutSubviews;

@end
