/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks//CoreMediaStream.framework/CoreMediaStream
 */

@class <NSObject><NSCoding>, <NSCoding>;

@interface MSObjectWrapper : NSObject  {
    long long _size;
    long long _uniqueID;
    <NSObject><NSCoding> *_object;
    int _errorCount;
}

@property long long size;
@property long long uniqueID;
@property(readonly) <NSCoding> * object;
@property int errorCount;

+ (id)objectsFromWrappers:(id)arg1 equalToObject:(id)arg2;
+ (int)indexOfObject:(id)arg1 inWrapperArray:(id)arg2;
+ (id)objectsFromWrappers:(id)arg1;
+ (id)wrapperWithObject:(id)arg1 size:(long long)arg2;

- (id)initWithObject:(id)arg1 size:(long long)arg2;
- (void)setErrorCount:(int)arg1;
- (void)setUniqueID:(long long)arg1;
- (long long)uniqueID;
- (int)errorCount;
- (long long)size;
- (id)object;
- (void).cxx_destruct;
- (void)setSize:(long long)arg1;

@end
