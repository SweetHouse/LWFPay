//
//  UIViewController+MASSAdditions.h
//  MASSonry
//
//  Created by Craig Siemens on 2015-06-23.
//
//

#import "MASSUtilities.h"
#import "MASSConstraintMaker.h"
#import "MASSViewAttribute.h"

#ifdef MASS_VIEW_CONTROLLER

@interface MASS_VIEW_CONTROLLER (MASSAdditions)

/**
 *	following properties return a new MASSViewAttribute with appropriate UILayoutGuide and NSLayoutAttribute
 */
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_topLayoutGuide;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_bottomLayoutGuide;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_topLayoutGuideTop;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_topLayoutGuideBottom;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_bottomLayoutGuideTop;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_bottomLayoutGuideBottom;


@end

#endif
