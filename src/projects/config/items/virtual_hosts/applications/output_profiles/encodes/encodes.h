//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Hyunjun Jang
//  Copyright (c) 2020 AirenSoft. All rights reserved.
//
//==============================================================================
#pragma once

#include "audio_profile.h"
#include "video_profile.h"
#include "image_profile.h"

namespace cfg
{
	namespace vhost
	{
		namespace app
		{
			namespace oprf
			{
				struct Encodes : public Item
				{
				protected:
					std::vector<AudioProfile> _audio_profiles;
					std::vector<VideoProfile> _video_profiles;
					std::vector<ImageProfile> _image_profiles;

				public:
					CFG_DECLARE_REF_GETTER_OF(GetAudioProfileList, _audio_profiles);
					CFG_DECLARE_REF_GETTER_OF(GetVideoProfileList, _video_profiles);
					CFG_DECLARE_REF_GETTER_OF(GetImageProfileList, _image_profiles);

				protected:
					void MakeParseList() override
					{
						RegisterValue<Optional>("Audio", &_audio_profiles);
						RegisterValue<Optional>("Video", &_video_profiles);
						RegisterValue<Optional>("Image", &_image_profiles);
					}
				};
			}  // namespace oprf
		}	   // namespace app
	}		   // namespace vhost
}  // namespace cfg