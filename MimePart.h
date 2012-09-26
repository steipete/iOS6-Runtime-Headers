/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class MFPartialNetworkData, MimePart, MFWeakReferenceHolder, NSString, NSData, NSMutableDictionary;

@interface MimePart : NSObject  {
    NSString *_type;
    NSString *_subtype;
    NSMutableDictionary *_bodyParameters;
    NSString *_contentTransferEncoding;
    NSMutableDictionary *_otherIvars;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    MFWeakReferenceHolder *_parent;
    MFWeakReferenceHolder *_body;
    MimePart *_nextPart;
    MFPartialNetworkData *_partialData;
    NSData *_fullData;
    MFWeakReferenceHolder *_decodedData;
}

+ (BOOL)isRecognizedClassForContent:(id)arg1;
+ (Class)attachmentClass;
+ (BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3;
+ (BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 info:(id*)arg4;
+ (void)initialize;

- (id)decodeMultipart;
- (id)decodeMultipartAlternative;
- (id)decodeMultipartRelated;
- (id)decodeApplicationOctet_stream;
- (id)decodeApplicationZip;
- (void)decodeIfNecessary;
- (id)bodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (BOOL)hasContents;
- (id)decodeText;
- (id)contentsForTextSystem;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (void)_contents:(id*)arg1 toOffset:(unsigned int)arg2 resultOffset:(unsigned int*)arg3 downloadIfNecessary:(BOOL)arg4 asHTML:(BOOL)arg5 isComplete:(BOOL*)arg6;
- (id)partNumber;
- (BOOL)parseIMAPPropertyList:(id)arg1;
- (BOOL)parseMimeBody;
- (BOOL)parseMimeBodyDownloadIfNecessary:(BOOL)arg1;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (id)copyBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (BOOL)_hasCompleteBodyDataToOffset:(unsigned int)arg1;
- (void)clearCachedDescryptedMessageBody;
- (id)signedData;
- (void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(BOOL)arg2 isSigned:(BOOL)arg3;
- (void)_setRFC822DecodedMessageBody:(id)arg1;
- (id)rfc822DecodedMessageBody;
- (BOOL)usesKnownSignatureProtocol;
- (unsigned int)approximateRawSize;
- (unsigned long)textEncoding;
- (void)setMimeBody:(id)arg1;
- (void)setContentDescription:(id)arg1;
- (id)dispositionParameterKeys;
- (void)setDispositionParameter:(id)arg1 forKey:(id)arg2;
- (void)setDisposition:(id)arg1;
- (void)setContentTransferEncoding:(id)arg1;
- (id)preservedHeaderValueForKey:(id)arg1;
- (id)bodyParameterKeys;
- (void)setBodyParameter:(id)arg1 forKey:(id)arg2;
- (void)getNumberOfAttachments:(unsigned int*)arg1 isSigned:(BOOL*)arg2 isEncrypted:(BOOL*)arg3;
- (id)decryptedMessageBodyIsEncrypted:(BOOL*)arg1 isSigned:(BOOL*)arg2;
- (BOOL)_shouldContinueDecodingProcess;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (id)bodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)copyBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (id)copyBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)decodedDataForData:(id)arg1;
- (id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3;
- (id)mimeBody;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (void)configureFileWrapper:(id)arg1;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2;
- (id)contentsForTextSystemForcingDownload:(BOOL)arg1;
- (id)bodyDataForcingDownload:(BOOL)arg1;
- (void)_ensureBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4 decoded:(id*)arg5;
- (id)_fullMimeTypeEvenInsideAppleDouble;
- (id)alternativeAtIndex:(int)arg1;
- (int)numberOfAlternatives;
- (id)subpartAtIndex:(int)arg1;
- (unsigned int)totalTextSize;
- (id)startPart;
- (BOOL)shouldConsiderInlineOverridingExchangeServer;
- (BOOL)isReadableText;
- (id)disposition;
- (id)subparts;
- (id)_partThatIsAttachment;
- (id)chosenAlternativePart;
- (id)attachmentFilename;
- (id)bodyParameterForKey:(id)arg1;
- (id)dispositionParameterForKey:(id)arg1;
- (id)parentPart;
- (id)contentTransferEncoding;
- (void)addSubpart:(id)arg1;
- (id)nextSiblingPart;
- (id)firstChildPart;
- (id)contentDescription;
- (void)setSubparts:(id)arg1;
- (unsigned int)numberOfAttachments;
- (id)textHtmlPart;
- (BOOL)isRich;
- (BOOL)isHTML;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 asHTML:(BOOL)arg3;
- (id)contentID;
- (void)setContentID:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setLanguages:(id)arg1;
- (id)languages;
- (id)attachments;
- (id)bodyData;
- (void)setContentLocation:(id)arg1;
- (id)contentLocation;
- (BOOL)isAttachment;
- (void)download;
- (void)setType:(id)arg1;
- (id)subtype;
- (id)fileWrapper;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isGenerated;
- (void)setIsGenerated:(BOOL)arg1;
- (void)setSubtype:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)type;

@end
