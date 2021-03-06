//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMessageLoadingContext, NNMKContentAttributedStringHTMLParser, NSURLSession;
@protocol EFCancelable;

@interface MFNanoServerMessageContentParser : NSObject
{
    NNMKContentAttributedStringHTMLParser *_htmlParser;	// 8 = 0x8
    MFMessageLoadingContext *_loadingContext;	// 16 = 0x10
    NSURLSession *_htmlContentURLSession;	// 24 = 0x18
    id <EFCancelable> _cancelable;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000ad660
- (id)_attachmentForURL:(id)arg1 mimePart:(id)arg2;	// IMP=0x00100000000ad34c
- (id)_nanoAttachmentForURL:(id)arg1 mimePart:(id)arg2;	// IMP=0x00100000000ad177
- (void)_parseAttachmentsFromMimePart:(id)arg1 messageBody:(id)arg2 maxImageAttachments:(unsigned long long)arg3 nanoAttachmentsList:(id)arg4 attachmentURLsToLoad:(id)arg5;	// IMP=0x00100000000acb3d
- (id)_parseWebMessageDocumentMimePart:(id)arg1 messageBody:(id)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 maxImageAttachments:(unsigned long long)arg5 shouldTryAlternatives:(_Bool)arg6 urlsForValidation:(id)arg7 finalNanoAttachmentsList:(id)arg8 finalAttachmentsURLsToLoad:(id)arg9 usingAlternativePart:(_Bool *)arg10 partiallyLoaded:(_Bool *)arg11;	// IMP=0x00100000000ac3a2
- (id)_parseStringMimePart:(id)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x00100000000ac2e3
- (id)_parseTextAttachmentMimePart:(id)arg1 messageBody:(id)arg2 maxImageAttachments:(unsigned long long)arg3 nanoAttachmentsList:(id)arg4 attachmentURLsToLoad:(id)arg5;	// IMP=0x00100000000ac01a
- (_Bool)_parseMimeParts:(id)arg1 messageBody:(id)arg2 attributedString:(id)arg3 maxLength:(unsigned long long)arg4 maxImageWidth:(double)arg5 maxImageAttachments:(unsigned long long)arg6 shouldTryAlternatives:(_Bool)arg7 urlsForValidation:(id)arg8 nanoAttachmentsList:(id)arg9 attachmentURLsToLoad:(id)arg10 usingAlternativePart:(_Bool *)arg11 partiallyLoaded:(_Bool *)arg12;	// IMP=0x00100000000aba97
- (id)parseMessageWithLoadingContextEvent:(id)arg1 maxImageWidth:(double)arg2 messageBody:(out id *)arg3 attachmentURLsToLoad:(out id *)arg4;	// IMP=0x00100000000ab22b
- (void)parseMessage:(id)arg1 maxImageWidth:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000aaac3
- (id)init;	// IMP=0x00100000000aaa3f
- (void)dealloc;	// IMP=0x00100000000aa9cb

@end

