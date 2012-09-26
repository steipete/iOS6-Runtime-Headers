/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData;

@interface OADSubBlip : OCDDelayedMedia  {
    int mType;
    NSData *mData;
    struct CGSize { 
        float width; 
        float height; 
    } mSizeInPoints;
    long mSizeInBytes;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mFrame;
}


- (void)setSizeInBytes:(long)arg1;
- (struct CGSize { float x1; float x2; })sizeInPoints;
- (void)setSizeInPoints:(struct CGSize { float x1; float x2; })arg1;
- (long)sizeInBytes;
- (id)initWithData:(id)arg1 type:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)data;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id).cxx_construct;
- (void)setData:(id)arg1;
- (int)type;
- (bool)isLoaded;

@end
