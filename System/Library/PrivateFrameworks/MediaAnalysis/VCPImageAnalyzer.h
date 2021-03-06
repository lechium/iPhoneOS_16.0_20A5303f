//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPImageAnalyzer : NSObject
{
}

- (int)calculateTextureness:(float *)arg1 height:(int)arg2 width:(int)arg3 sdof:(_Bool)arg4 result:(char *)arg5;	// IMP=0x00000000001fb949
- (int)analyzePixelBufferInTiles:(struct __CVBuffer *)arg1 results:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fb4b0
- (int)aggregateTileResults:(id)arg1 tileRect:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 landscape:(_Bool)arg4 results:(id)arg5;	// IMP=0x00000000001fb4a5
- (int)processTile:(struct __CVBuffer *)arg1 results:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fb49a
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x00000000001fb488

@end

