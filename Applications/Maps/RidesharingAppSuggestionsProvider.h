//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RidesharingAppSuggestionsProvider : NSObject
{
}

+ (id)sharedProvider;	// IMP=0x004000000095d766
- (id)partitionedApplicationSuggestionsFromSuggestions:(id)arg1;	// IMP=0x004000000095e390
- (id)_applicationsAfterFilteringOutInstalledApplicationsFromApplications:(id)arg1;	// IMP=0x001000000095e1c1
- (id)_searchErrorWithUserInfo:(id)arg1;	// IMP=0x001000000095e199
- (void)_fetchAppDataForAppIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000095e054
- (void)_fetchAppIDsForSource:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000095da14
- (void)fetchSuggestedAppsForSource:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000095d7eb

@end
