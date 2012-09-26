/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableDictionary, NSString, NSData;

@interface MessageFileWrapper : NSObject  {
    NSString *_path;
    NSString *_filename;
    NSString *_preferredFilename;
    NSData *_data;
    NSMutableDictionary *_attributes;
    NSString *_linkDestination;
    NSString *_url;
    int _type;
}


- (unsigned long)creator;
- (id)symbolicLinkDestination;
- (id)initSymbolicLinkWithDestination:(id)arg1;
- (BOOL)isUnzippableFile;
- (BOOL)isPDFFile;
- (BOOL)isImageFile;
- (id)fileProtection;
- (void)setFileProtection:(id)arg1;
- (id)icsRepresentation;
- (void)setICSRepresentation:(id)arg1;
- (id)meetingStorePersistentID;
- (void)setMeetingStorePersistentID:(id)arg1;
- (id)eventUniqueID;
- (void)setEventUniqueID:(id)arg1;
- (id)contentID;
- (void)setContentID:(id)arg1;
- (id)inferredMimeType;
- (unsigned short)finderFlags;
- (void)setFinderFlags:(unsigned short)arg1;
- (void)setCreator:(unsigned long)arg1;
- (void)setMimeType:(id)arg1;
- (void)_isImage:(BOOL*)arg1 orPDFFile:(BOOL*)arg2;
- (BOOL)isPlaceholder;
- (void)setMessageID:(id)arg1;
- (id)messageID;
- (void)setPath:(id)arg1;
- (void)setType:(unsigned long)arg1;
- (void)dealloc;
- (id)description;
- (id)mimeType;
- (void)setFilename:(id)arg1;
- (id)regularFileContents;
- (id)filename;
- (void)setFileAttributes:(id)arg1;
- (BOOL)isSymbolicLink;
- (BOOL)isRegularFile;
- (id)fileWrappers;
- (void)setPreferredFilename:(id)arg1;
- (id)preferredFilename;
- (id)initRegularFileWithContents:(id)arg1;
- (unsigned long)type;
- (void)setURL:(id)arg1;
- (id)URL;
- (id)fileAttributes;
- (BOOL)isDirectory;
- (id)initWithPath:(id)arg1;
- (id)path;

@end
