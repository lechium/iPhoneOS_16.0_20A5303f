//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface BRCShareAcceptationDirectoryFault
{
}

- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;	// IMP=0x00000000000a4fa1
- (void)markNeedsTransformIntoNormalFault;	// IMP=0x00000000000a4f7c
- (void)deleteShareAcceptationFault;	// IMP=0x00000000000a4e3a
- (void)stageShareAcceptationFaultWithName:(id)arg1;	// IMP=0x00000000000a4d40
- (void)markLiveFromStageAsShareAcceptationFault;	// IMP=0x00000000000a4c6d
- (id)asShareAcceptationFault;	// IMP=0x00000000000a4c64
- (_Bool)isShareAcceptationFault;	// IMP=0x00000000000a4c5c
- (id)initWithFilename:(id)arg1 itemID:(id)arg2 parentID:(id)arg3 appLibrary:(id)arg4 clientZone:(id)arg5 sharingOptions:(unsigned long long)arg6;	// IMP=0x00000000000a4891

@end

