//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUSessionInfo.h"

__attribute__((visibility("hidden")))
@interface PUImagePickerSessionInfo : PUSessionInfo
{
    _Bool _isLimitedLibraryPicker;	// 8 = 0x8
}

- (_Bool)isLimitedLibraryPicker;	// IMP=0x00000000001c6a25
- (_Bool)isForAssetPicker;	// IMP=0x00000000001c6a1d
- (_Bool)isSelectingAssets;	// IMP=0x00000000001c6a15
- (id)initWithPhotosViewDelegate:(id)arg1 loadingStatusManager:(id)arg2 allowMultipleSelection:(_Bool)arg3 limitedLibrary:(_Bool)arg4;	// IMP=0x00000000001c694e

@end
