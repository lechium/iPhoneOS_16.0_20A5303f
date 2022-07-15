//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (SFUtilityAdditions)
+ (id)filePathURLWithEscapes:(id)arg1;	// IMP=0x00100000000514a9
+ (id)relativeURLWithEscapes:(id)arg1;	// IMP=0x0010000000051466
+ (id)improperlyEscapedString:(id)arg1;	// IMP=0x0010000000051312
+ (id)properlyEscapedString:(id)arg1;	// IMP=0x00100000000512ec
+ (void)downloadManager:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00100000000643d4
+ (void)downloadManager:(id)arg1 task:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x0010000000064202
+ (_Bool)canHandleDownloadTask:(id)arg1;	// IMP=0x00100000000641b4
- (_Bool)isRelative;	// IMP=0x0010000000051532
- (_Bool)tsu_conformsToUTI:(id)arg1;	// IMP=0x0010000000053318
@property(readonly, nonatomic) NSString *tsu_UTI;
@property(readonly, nonatomic) long long totalBytesExpectedToBeDownloaded;
@property(readonly, nonatomic) NSURL *downloadURL;
@property(readonly, nonatomic) NSString *downloadTaskDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool needsDownload;
@property(readonly) Class superclass;
@end
