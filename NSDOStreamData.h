/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDOStreamData : NSMutableData  {
    id refObject;
    struct { 
        id data; 
        char *datap; 
        char *limitp; 
        char *startp; 
        id callback; 
        BOOL datapVM; 
    } stream;
}


- (id)init;
- (void)dealloc;
- (void*)mutableBytes;
- (const void*)bytes;
- (unsigned int)length;
- (void)finalize;

@end
