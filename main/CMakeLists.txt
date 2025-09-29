idf_component_register(SRCS "app_main.c" "sensor_driver.c"
                    PRIV_REQUIRES mqtt esp_partition nvs_flash esp_netif app_update
                    INCLUDE_DIRS ".")
