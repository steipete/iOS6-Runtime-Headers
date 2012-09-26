/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class MessageFileWrapper, NSMutableDictionary;

@interface MessageTextAttachment : NSObject  {
    NSMutableDictionary *_cache;
}

@property(retain) MessageFileWrapper * fileWrapper;

+ (unsigned int)precedenceLevel;

- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (id)textEncodingGuess;
- (id)mimePart;
- (id)persistentUniqueIdentifier;
- (void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2;
- (BOOL)needsRedownload;
- (BOOL)hasBeenDownloaded;
- (unsigned int)approximateSize;
- (void)setFileWrapper:(id)arg1;
- (id)cachedValueForKey:(id)arg1;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)setMimePart:(id)arg1;
- (id)initWithWrapper:(id)arg1;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (BOOL)isPlaceholder;
- (void)download;
- (id)fileWrapper;
- (id)init;
- (void)dealloc;
- (id)description;

@end
