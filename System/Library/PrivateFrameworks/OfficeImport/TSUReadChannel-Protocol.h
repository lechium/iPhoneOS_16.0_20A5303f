//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/TSUIOChannel-Protocol.h>
#import <OfficeImport/TSUStreamReadChannel-Protocol.h>

@protocol TSUReadChannel <TSUIOChannel, TSUStreamReadChannel>
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg3;
@end

