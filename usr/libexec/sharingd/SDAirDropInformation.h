//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SDStatusMonitor;
@protocol SDAirDropInformationDelegate;

@interface SDAirDropInformation : NSObject
{
    _Bool _started;	// 8 = 0x8
    SDStatusMonitor *_monitor;	// 16 = 0x10
    NSMutableDictionary *_properties;	// 24 = 0x18
    id <SDAirDropInformationDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000e8744
@property __weak id <SDAirDropInformationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;	// IMP=0x00100000000e86ff
- (void)start;	// IMP=0x00100000000e86c2
- (void)removeObservers;	// IMP=0x00100000000e866f
- (void)addObservers;	// IMP=0x00100000000e8536
- (void)somethingChanged:(id)arg1;	// IMP=0x00100000000e8524
- (void)setInformationAndNotify;	// IMP=0x00100000000e81d8
- (void)setProperty:(void *)arg1 forKey:(id)arg2;	// IMP=0x00100000000e80bf
- (_Bool)boolValue:(void *)arg1;	// IMP=0x00100000000e8085
- (void)dealloc;	// IMP=0x00100000000e8047
- (id)init;	// IMP=0x00100000000e7fbe

@end

