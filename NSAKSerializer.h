/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAKSerializer : NSObject  {
    id ss;
}


- (void)dealloc;
- (id)serializerStream;
- (id)initForSerializerStream:(id)arg1;
- (unsigned int)serializePListValueIn:(id)arg1 key:(id)arg2 value:(id)arg3;
- (unsigned int)serializePListKeyIn:(id)arg1 key:(id)arg2 value:(id)arg3;
- (unsigned int)serializeObject:(id)arg1;
- (unsigned int)serializeListItemIn:(id)arg1 at:(unsigned int)arg2;
- (unsigned int)serializeString:(id)arg1;
- (unsigned int)serializePropertyList:(id)arg1;
- (unsigned int)serializeList:(id)arg1;
- (unsigned int)serializeData:(id)arg1;

@end
