//
//  KKBBaseTableController.h
//  KKBLibrary
//
//  Created by Duane on 2019/3/23.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <KKBLibrary/KKBBaseScrollController.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBBaseTableController : KKBBaseScrollController <UITableViewDataSource, UITableViewDelegate, UITableViewDataSourcePrefetching>

@property (nonatomic, strong, readonly) UITableView *tableView;
@property (nonatomic, assign) BOOL autoSetViewState;

- (UITableViewStyle)tableViewStyle;

@end

NS_ASSUME_NONNULL_END
