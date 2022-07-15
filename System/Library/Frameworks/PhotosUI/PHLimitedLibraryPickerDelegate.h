//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PLAssetsdClient;

__attribute__((visibility("hidden")))
@interface PHLimitedLibraryPickerDelegate : NSObject
{
    CDUnknownBlockType _dismissalBlock;	// 8 = 0x8
    CDUnknownBlockType _finishedPickingBlock;	// 16 = 0x10
    PLAssetsdClient *_assetsdClient;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000f1e6
@property(retain, nonatomic) PLAssetsdClient *assetsdClient; // @synthesize assetsdClient=_assetsdClient;
@property(copy, nonatomic) CDUnknownBlockType finishedPickingBlock; // @synthesize finishedPickingBlock=_finishedPickingBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x000000000000f038
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x000000000000ef16
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;	// IMP=0x000000000000edd2
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x000000000000ec60
- (void)dismissImagePickerController:(id)arg1;	// IMP=0x000000000000eb9e
- (void)_dismissImagePickerController:(id)arg1;	// IMP=0x000000000000eb4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
