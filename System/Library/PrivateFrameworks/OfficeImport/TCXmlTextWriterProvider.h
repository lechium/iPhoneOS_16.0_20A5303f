//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCXmlTextWriterProvider : NSObject
{
    struct _xmlTextWriter *_textWriter;	// 8 = 0x8
}

@property(readonly, nonatomic) struct _xmlTextWriter *textWriter; // @synthesize textWriter=_textWriter;
- (_Bool)tearDown;	// IMP=0x00000000002eb6b3
- (_Bool)setUpWithTextWriter:(struct _xmlTextWriter *)arg1;	// IMP=0x00000000002eb6a3
- (_Bool)setUp;	// IMP=0x00000000002eb4eb
- (void)dealloc;	// IMP=0x00000000002eb460

@end

