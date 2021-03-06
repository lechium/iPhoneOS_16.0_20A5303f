//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMediaFileType;

__attribute__((visibility("hidden")))
@interface AVMediaFileOutputSettingsValidator : NSObject
{
    AVMediaFileType *_fileType;	// 8 = 0x8
}

+ (id)mediaFileOutputSettingsValidatorForFileType:(id)arg1;	// IMP=0x001000000013459c
+ (void)initialize;	// IMP=0x0010000000134448
- (_Bool)validateVideoOutputSettings:(id)arg1 reason:(id *)arg2;	// IMP=0x0000000000134936
- (_Bool)validateAudioOutputSettings:(id)arg1 reason:(id *)arg2;	// IMP=0x0000000000134773
@property(readonly, nonatomic) AVMediaFileType *fileType;
- (void)dealloc;	// IMP=0x000000000013472e
- (id)initWithFileType:(id)arg1;	// IMP=0x0000000000134626
- (id)init;	// IMP=0x0000000000134612

@end

