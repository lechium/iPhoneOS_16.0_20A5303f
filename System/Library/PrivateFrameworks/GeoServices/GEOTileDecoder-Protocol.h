//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSData;

@protocol GEOTileDecoder <NSObject>
- (id)decodeTile:(NSData *)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (_Bool)canDecodeTile:(const struct _GEOTileKey *)arg1 quickly:(_Bool *)arg2;
@end

