/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks//CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, NSDictionary;

@interface MSASAlbum : NSObject <NSCopying> {
    NSString *_ownerEmail;
    NSString *_ownerFullName;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    NSString *_GUID;
    NSString *_ctag;
    int _relationshipState;
    NSString *_foreignCtag;
    NSString *_URLString;
    NSString *_publicURLString;
    NSDictionary *_metadata;
    id _context;
}

@property(retain) NSString * ownerEmail;
@property(retain) NSString * ownerFullName;
@property(retain) NSString * ownerFirstName;
@property(retain) NSString * ownerLastName;
@property(retain) NSString * GUID;
@property(retain) NSString * ctag;
@property int relationshipState;
@property(retain) NSString * foreignCtag;
@property(retain) NSString * URLString;
@property(retain) NSString * publicURLString;
@property(retain) NSDictionary * metadata;
@property(retain) id context;
@property(readonly) BOOL useForeignCtag;

+ (id)album;
+ (id)albumWithAlbum:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)setPublicURLString:(id)arg1;
- (id)ownerFullName;
- (BOOL)useForeignCtag;
- (void)setForeignCtag:(id)arg1;
- (id)foreignCtag;
- (void)setRelationshipState:(int)arg1;
- (int)relationshipState;
- (void)setOwnerLastName:(id)arg1;
- (id)ownerLastName;
- (void)setOwnerFirstName:(id)arg1;
- (id)ownerFirstName;
- (void)setOwnerFullName:(id)arg1;
- (id)_ownerFullName;
- (void)setOwnerEmail:(id)arg1;
- (id)ownerEmail;
- (void)setGUID:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)metadataValueForKey:(id)arg1;
- (id)GUID;
- (void)setCtag:(id)arg1;
- (id)ctag;
- (id)publicURLString;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)URLString;
- (void)setContext:(id)arg1;
- (id)context;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setURLString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
