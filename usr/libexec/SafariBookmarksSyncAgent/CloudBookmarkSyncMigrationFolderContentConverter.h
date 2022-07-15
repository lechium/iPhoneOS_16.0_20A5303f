//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CloudBookmarkSyncMigrationPositionGenerator, NSEnumerator;

@interface CloudBookmarkSyncMigrationFolderContentConverter
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    CloudBookmarkSyncMigrationPositionGenerator *_positionGenerator;	// 16 = 0x10
    NSEnumerator *_recordNameEnumerator;	// 24 = 0x18
    _Bool _isMigrating;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000007621a
- (id)positionForCloudBookmarkWithRecordName:(id)arg1;	// IMP=0x00100000000761fd
- (id)generateIdentityHashWithComponents:(id)arg1;	// IMP=0x001000000007615c
- (id)_nextCloudBookmarkToSave;	// IMP=0x001000000007601b
- (void)_didFinishSavingRecordsWithNames:(id)arg1;	// IMP=0x0010000000075f32
- (void)_didFailSavingWithError:(id)arg1;	// IMP=0x0010000000075e64
- (void)beginFolderMigrationInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000075c38

@end
