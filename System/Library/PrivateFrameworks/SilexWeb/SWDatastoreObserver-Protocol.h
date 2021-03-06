//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SilexWeb/NSObject-Protocol.h>

@class SWDatastore;
@protocol SWDatastoreManager, SWSession;

@protocol SWDatastoreObserver <NSObject>
- (void)datastoreManager:(id <SWDatastoreManager>)arg1 didChangeFromDatastore:(SWDatastore *)arg2 toDatastore:(SWDatastore *)arg3 originatingSession:(id <SWSession>)arg4;
@end

