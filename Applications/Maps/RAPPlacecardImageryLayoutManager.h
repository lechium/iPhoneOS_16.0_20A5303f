//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, RAPLayoutDownloader;

@interface RAPPlacecardImageryLayoutManager
{
    NSArray *_layoutItems;	// 8 = 0x8
    RAPLayoutDownloader *_downloader;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002e20fb
- (id)issueItems;	// IMP=0x00100000002e1e85
- (id)issueItemForIndex:(unsigned long long)arg1;	// IMP=0x00100000002e1d55
- (unsigned long long)numberOfIssueItems;	// IMP=0x00100000002e1d38
- (void)downloadAndResolveLayoutWithMapItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e1a74
- (void)mergeWithServerConfig:(id)arg1;	// IMP=0x00100000002e1146
- (id)initWithDefaultItems:(id)arg1;	// IMP=0x00100000002e0dd2

@end

