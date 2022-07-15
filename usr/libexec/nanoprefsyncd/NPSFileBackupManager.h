//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSDeviceRegistry, NSMutableDictionary, NSUUID;

@interface NPSFileBackupManager : NSObject
{
    NPSDeviceRegistry *_deviceRegistry;	// 8 = 0x8
    NSUUID *_activeDeviceID;	// 16 = 0x10
    NSMutableDictionary *_metadataIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002d760
@property(retain, nonatomic) NSMutableDictionary *metadataIndex; // @synthesize metadataIndex=_metadataIndex;
@property(nonatomic) NSUUID *activeDeviceID; // @synthesize activeDeviceID=_activeDeviceID;
@property(retain, nonatomic) NPSDeviceRegistry *deviceRegistry; // @synthesize deviceRegistry=_deviceRegistry;
- (id)newFileUUID;	// IMP=0x001000000002d4ae
- (void)persistMetadataIndex;	// IMP=0x001000000002d245
- (id)metadataIndexReadFromDiskIfNeeded;	// IMP=0x001000000002d0d5
- (id)fileURLWithUUID:(id)arg1;	// IMP=0x001000000002d072
- (id)pathToFileWithUUID:(id)arg1;	// IMP=0x001000000002cfcf
- (id)localFileURLForOriginalFileURL:(id)arg1;	// IMP=0x001000000002cdec
- (void);	// IMP=0x001000000002cb7c
- (void)backupFileAtURL:(id)arg1 originalFileURL:(id)arg2;	// IMP=0x001000000002c2dd
@property(readonly, nonatomic) _Bool activeDeviceChanged;
- (id)initWithDeviceRegistry:(id)arg1;	// IMP=0x001000000002c1d4

@end
