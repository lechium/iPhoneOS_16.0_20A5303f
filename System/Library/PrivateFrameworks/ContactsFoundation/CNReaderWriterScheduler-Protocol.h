//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@protocol CNCancelable;

@protocol CNReaderWriterScheduler <NSObject>
- (void)resume;
- (void)suspend;
- (void)performSynchronousWriterBlock:(void (^)(void))arg1;
- (void)performSynchronousReaderBlock:(void (^)(void))arg1;
- (id <CNCancelable>)performWriterBlock:(void (^)(CNCancelationToken *))arg1;
- (id <CNCancelable>)performReaderBlock:(void (^)(CNCancelationToken *))arg1;
@end

