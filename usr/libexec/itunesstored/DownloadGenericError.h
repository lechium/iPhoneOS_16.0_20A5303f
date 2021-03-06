//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@interface DownloadGenericError
{
    NSError *_error;	// 40 = 0x28
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000011431d
- (id)_notificationTitle;	// IMP=0x0010000000114099
- (id)_notificationBody;	// IMP=0x0010000000113cdd
- (_Bool)_isInstallError:(id)arg1;	// IMP=0x0010000000113c82
- (void)performActionForResponseFlags:(unsigned long long)arg1;	// IMP=0x0010000000113acf
- (id)copyUserNotification;	// IMP=0x0010000000113913
- (_Bool)canCoalesceWithError:(id)arg1;	// IMP=0x0010000000113844
- (void)dealloc;	// IMP=0x0010000000113802
- (id)initWithError:(id)arg1;	// IMP=0x00100000001137ab

@end

