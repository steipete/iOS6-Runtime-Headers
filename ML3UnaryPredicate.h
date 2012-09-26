/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3Predicate;

@interface ML3UnaryPredicate : ML3Predicate  {
    ML3Predicate *_predicate;
}

@property(retain) ML3Predicate * predicate;

+ (id)predicateWithPredicate:(id)arg1;

- (id)initWithPredicate:(id)arg1;
- (void)bindToStatement:(id)arg1 bindingIndex:(inout int*)arg2;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void).cxx_destruct;
- (void)setPredicate:(id)arg1;
- (id)predicate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
