//
//  MASSConstraintBuilder.h
//  MASSonry
//
//  Created by Jonas Budelmann on 20/07/13.
//  Copyright (c) 2013 cloudling. All rights reserved.
//

#import "MASSConstraint.h"
#import "MASSUtilities.h"

typedef NS_OPTIONS(NSInteger, MASSAttribute) {
    MASSAttributeLeft = 1 << NSLayoutAttributeLeft,
    MASSAttributeRight = 1 << NSLayoutAttributeRight,
    MASSAttributeTop = 1 << NSLayoutAttributeTop,
    MASSAttributeBottom = 1 << NSLayoutAttributeBottom,
    MASSAttributeLeading = 1 << NSLayoutAttributeLeading,
    MASSAttributeTrailing = 1 << NSLayoutAttributeTrailing,
    MASSAttributeWidth = 1 << NSLayoutAttributeWidth,
    MASSAttributeHeight = 1 << NSLayoutAttributeHeight,
    MASSAttributeCenterX = 1 << NSLayoutAttributeCenterX,
    MASSAttributeCenterY = 1 << NSLayoutAttributeCenterY,
    MASSAttributeBaseline = 1 << NSLayoutAttributeBaseline,
    
#if (__IPHONE_OS_VERSION_MIN_REQUIRED >= 80000) || (__TV_OS_VERSION_MIN_REQUIRED >= 9000) || (__MAC_OS_X_VERSION_MIN_REQUIRED >= 101100)
    
    MASSAttributeFirstBaseline = 1 << NSLayoutAttributeFirstBaseline,
    MASSAttributeLastBaseline = 1 << NSLayoutAttributeLastBaseline,
    
#endif
    
#if TARGET_OS_IPHONE || TARGET_OS_TV
    
    MASSAttributeLeftMargin = 1 << NSLayoutAttributeLeftMargin,
    MASSAttributeRightMargin = 1 << NSLayoutAttributeRightMargin,
    MASSAttributeTopMargin = 1 << NSLayoutAttributeTopMargin,
    MASSAttributeBottomMargin = 1 << NSLayoutAttributeBottomMargin,
    MASSAttributeLeadingMargin = 1 << NSLayoutAttributeLeadingMargin,
    MASSAttributeTrailingMargin = 1 << NSLayoutAttributeTrailingMargin,
    MASSAttributeCenterXWithinMargins = 1 << NSLayoutAttributeCenterXWithinMargins,
    MASSAttributeCenterYWithinMargins = 1 << NSLayoutAttributeCenterYWithinMargins,

#endif
    
};

/**
 *  Provides factory methods for creating MASSConstraints.
 *  Constraints are collected until they are ready to be installed
 *
 */
@interface MASSConstraintMaker : NSObject

/**
 *	The following properties return a new MASSViewConstraint
 *  with the first item set to the makers associated view and the appropriate MASSViewAttribute
 */
@property (nonatomic, strong, readonly) MASSConstraint *left;
@property (nonatomic, strong, readonly) MASSConstraint *top;
@property (nonatomic, strong, readonly) MASSConstraint *right;
@property (nonatomic, strong, readonly) MASSConstraint *bottom;
@property (nonatomic, strong, readonly) MASSConstraint *leading;
@property (nonatomic, strong, readonly) MASSConstraint *trailing;
@property (nonatomic, strong, readonly) MASSConstraint *width;
@property (nonatomic, strong, readonly) MASSConstraint *height;
@property (nonatomic, strong, readonly) MASSConstraint *centerX;
@property (nonatomic, strong, readonly) MASSConstraint *centerY;
@property (nonatomic, strong, readonly) MASSConstraint *baseline;

#if (__IPHONE_OS_VERSION_MIN_REQUIRED >= 80000) || (__TV_OS_VERSION_MIN_REQUIRED >= 9000) || (__MAC_OS_X_VERSION_MIN_REQUIRED >= 101100)

@property (nonatomic, strong, readonly) MASSConstraint *firstBaseline;
@property (nonatomic, strong, readonly) MASSConstraint *lastBaseline;

#endif

#if TARGET_OS_IPHONE || TARGET_OS_TV

@property (nonatomic, strong, readonly) MASSConstraint *leftMargin;
@property (nonatomic, strong, readonly) MASSConstraint *rightMargin;
@property (nonatomic, strong, readonly) MASSConstraint *topMargin;
@property (nonatomic, strong, readonly) MASSConstraint *bottomMargin;
@property (nonatomic, strong, readonly) MASSConstraint *leadingMargin;
@property (nonatomic, strong, readonly) MASSConstraint *trailingMargin;
@property (nonatomic, strong, readonly) MASSConstraint *centerXWithinMargins;
@property (nonatomic, strong, readonly) MASSConstraint *centerYWithinMargins;

#endif

/**
 *  Returns a block which creates a new MASSCompositeConstraint with the first item set
 *  to the makers associated view and children corresponding to the set bits in the
 *  MASSAttribute parameter. Combine multiple attributes via binary-or.
 */
@property (nonatomic, strong, readonly) MASSConstraint *(^attributes)(MASSAttribute attrs);

/**
 *	Creates a MASSCompositeConstraint with type MASSCompositeConstraintTypeEdges
 *  which generates the appropriate MASSViewConstraint children (top, left, bottom, right)
 *  with the first item set to the makers associated view
 */
@property (nonatomic, strong, readonly) MASSConstraint *edges;

/**
 *	Creates a MASSCompositeConstraint with type MASSCompositeConstraintTypeSize
 *  which generates the appropriate MASSViewConstraint children (width, height)
 *  with the first item set to the makers associated view
 */
@property (nonatomic, strong, readonly) MASSConstraint *size;

/**
 *	Creates a MASSCompositeConstraint with type MASSCompositeConstraintTypeCenter
 *  which generates the appropriate MASSViewConstraint children (centerX, centerY)
 *  with the first item set to the makers associated view
 */
@property (nonatomic, strong, readonly) MASSConstraint *center;

/**
 *  Whether or not to check for an existing constraint instead of adding constraint
 */
@property (nonatomic, assign) BOOL updateExisting;

/**
 *  Whether or not to remove existing constraints prior to installing
 */
@property (nonatomic, assign) BOOL removeExisting;

/**
 *	initialises the maker with a default view
 *
 *	@param	view	any MASSConstrait are created with this view as the first item
 *
 *	@return	a new MASSConstraintMaker
 */
- (id)initWithView:(MASS_VIEW *)view;

/**
 *	Calls install method on any MASSConstraints which have been created by this maker
 *
 *	@return	an array of all the installed MASSConstraints
 */
- (NSArray *)install;

- (MASSConstraint * (^)(dispatch_block_t))group;

@end
