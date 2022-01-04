//
//  GBATypes.h
//  GBADeltaCore
//
//  Created by Riley Testut on 1/30/20.
//  Copyright © 2020 Riley Testut. All rights reserved.
//

#if SWIFT_PACKAGE
#if __has_feature(modules)
@import CDeltaCore;
#endif
#else
#import <DeltaCore/DeltaTypes.h>
#endif

#if __has_feature(modules)
// Extensible Enums
FOUNDATION_EXPORT GameType const GameTypeGBA NS_SWIFT_NAME(gba);

FOUNDATION_EXPORT CheatType const CheatTypeActionReplay;
FOUNDATION_EXPORT CheatType const CheatTypeGameShark;
FOUNDATION_EXPORT CheatType const CheatTypeCodeBreaker;
#endif

FOUNDATION_EXPORT NSNotificationName const GBADidActivateGyroNotification NS_REFINED_FOR_SWIFT;
FOUNDATION_EXPORT NSNotificationName const GBADidDeactivateGyroNotification NS_REFINED_FOR_SWIFT;
