//
//  UIView+MASSAdditions.h
//  MASSonry
//
//  Created by Jonas Budelmann on 20/07/13.
//  Copyright (c) 2013 cloudling. All rights reserved.
//

#import "MASSUtilities.h"
#import "MASSConstraintMaker.h"
#import "MASSViewAttribute.h"

/**
 *	Provides constraint maker block
 *  and convience methods for creating MASSViewAttribute which are view + NSLayoutAttribute pairs
 */
@interface MASS_VIEW (MASSAdditions)

/**
 *	following properties return a new MASSViewAttribute with current view and appropriate NSLayoutAttribute
 */
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_left;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_top;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_right;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_bottom;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_leading;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_trailing;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_width;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_height;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_centerX;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_centerY;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_baseline;
@property (nonatomic, strong, readonly) MASSViewAttribute *(^MASS_attribute)(NSLayoutAttribute attr);

#if (__IPHONE_OS_VERSION_MIN_REQUIRED >= 80000) || (__TV_OS_VERSION_MIN_REQUIRED >= 9000) || (__MAC_OS_X_VERSION_MIN_REQUIRED >= 101100)

@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_firstBaseline;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_lastBaseline;

#endif

#if TARGET_OS_IPHONE || TARGET_OS_TV

@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_leftMargin;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_rightMargin;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_topMargin;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_bottomMargin;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_leadingMargin;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_trailingMargin;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_centerXWithinMargins;
@property (nonatomic, strong, readonly) MASSViewAttribute *MASS_centerYWithinMargins;

#endif

/**
 *	a key to associate with this view
 */
@property (nonatomic, strong) id MASS_key;

/**
 *	Finds the closest common superview between this view and another view
 *
 *	@param	view	other view
 *
 *	@return	returns nil if common superview could not be found
 */
- (instancetype)MASS_closestCommonSuperview:(MASS_VIEW *)view;

/**
 *  Creates a MASSConstraintMaker with the callee view.
 *  Any constraints defined are added to the view or the appropriate superview once the block has finished executing
 *
 *  @param block scope within which you can build up the constraints which you wish to apply to the view.
 *
 *  @return Array of created MASSConstraints
 */
- (NSArray *)MASS_makeConstraints:(void(^)(MASSConstraintMaker *make))block;

/**
 *  Creates a MASSConstraintMaker with the callee view.
 *  Any constraints defined are added to the view or the appropriate superview once the block has finished executing.
 *  If an existing constraint exists then it will be updated instead.
 *
 *  @param block scope within which you can build up the constraints which you wish to apply to the view.
 *
 *  @return Array of created/updated MASSConstraints
 */
- (NSArray *)MASS_updateConstraints:(void(^)(MASSConstraintMaker *make))block;

/**
 *  Creates a MASSConstraintMaker with the callee view.
 *  Any constraints defined are added to the view or the appropriate superview once the block has finished executing.
 *  All constraints previously installed for the view will be removed.
 *
 *  @param block scope within which you can build up the constraints which you wish to apply to the view.
 *
 *  @return Array of created/updated MASSConstraints
 */
- (NSArray *)MASS_remakeConstraints:(void(^)(MASSConstraintMaker *make))block;

@end
