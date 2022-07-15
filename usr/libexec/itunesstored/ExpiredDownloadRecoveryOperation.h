//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class SSMemoryEntity;

@interface ExpiredDownloadRecoveryOperation : ISOperation
{
    SSMemoryEntity *_download;	// 96 = 0x60
    CDUnknownBlockType _outputBlock;	// 104 = 0x68
}

+ (_Bool)canAttemptRecoveryWithError:(id)arg1;	// IMP=0x0040000000191050
- (void).cxx_destruct;	// IMP=0x0020000000191c58
- (void)run;	// IMP=0x00100000001911ff
- (void);	// IMP=0x0010000000191188
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithDownloadIdentifier:(long long)arg1 databaseSession:(id)arg2;	// IMP=0x0010000000190e6b

@end
