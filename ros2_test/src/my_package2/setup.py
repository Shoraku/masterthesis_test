from setuptools import find_packages, setup

package_name = 'my_package2'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='shorif',
    maintainer_email='alamgaru@hotmail.de',
    description='ActionServer and ActionClient Test',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
		'action_server = my_package2.B_Action_Server:main',
		'action_client = my_package2.A_Action_Client:main',
        ],
    },
)
