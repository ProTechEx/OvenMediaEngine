//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Hyunjun Jang
//  Copyright (c) 2021 AirenSoft. All rights reserved.
//
//==============================================================================
#pragma once

#include "../../../common/urls.h"

namespace cfg
{
	namespace bind
	{
		namespace pub
		{
			struct IceServer : public Item
			{
			protected:
				cmn::Urls _urls;
				ov::String _user_name;
				ov::String _credential;

			public:
				CFG_DECLARE_REF_GETTER_OF(GetUrls, _urls)
				CFG_DECLARE_GETTER_OF(GetUserName, _user_name)
				CFG_DECLARE_GETTER_OF(GetCredential, _credential)

			protected:
				void MakeParseList() override
				{
					RegisterValue("Urls", &_urls);
					RegisterValue<Optional>("UserName", &_user_name);
					RegisterValue<Optional>("Credential", &_credential);
				}
			};
		}  // namespace pub
	}	   // namespace bind
}  // namespace cfg
