//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServicesCore/NSObject-Protocol.h>

@class IOSurface, NSMutableDictionary;

@protocol PLAssetsdResourceWriteOnlyServiceProtocol <NSObject>
- (void)saveAssetWithDataAndPorts:(NSMutableDictionary *)arg1 imageSurface:(IOSurface *)arg2 previewImageSurface:(IOSurface *)arg3 reply:(void (^)(_Bool, NSDictionary *, _Bool, _Bool, NSError *))arg4;
@end

